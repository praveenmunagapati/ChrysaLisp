(import 'class/stream/stream.inc)

(def-class 'msg_out 'stream)
(def-method 'create 'class/msg_out/create 'static '(r0 r1) '(r0))
(def-method 'new 'class/msg_out/new 'static nil '(r0))
(def-method 'init 'class/msg_out/init 'static '(r0 r1 r2 r3))
(def-method 'next_seq 'class/msg_out/next_seq 'static '(r0 r1 r2) '(r0))
(def-method 'set_state 'class/msg_out/set_state 'static '(r0 r1) '(r0))

(def-method 'deinit 'class/msg_out/deinit 'final)
(def-method 'write_flush 'class/msg_out/write_flush 'final)
(def-method 'write_next 'class/msg_out/write_next 'final)

(def-struct 'msg_out 'stream)
	(ulong 'seqnum)
	(ulong 'state)
	(struct 'id 'id)
	(ulong 'ack_seqnum)
	(struct 'ack_mailbox 'mailbox)
(def-struct-end)

(def-struct 'stream_mail 'msg_header)
	(ulong 'seqnum)
	(ulong 'state)
	(struct 'ack_id 'id)
	(offset 'data)
(def-struct-end)

(defcvar 'msg_out_ack_shift 6)

(def-enum 'stream_mail_state)
	(enum 'started 'stopping 'stopped)
(def-enum-end)

;;;;;;;;;;;;;;;;
; inline methods
;;;;;;;;;;;;;;;;

(defcfun class/msg_out/set_state ()
	;inputs
	;r0 = msg_out object
	;r1 = stream state
	(vp-cpy-ri r1 r0 msg_out_state))
