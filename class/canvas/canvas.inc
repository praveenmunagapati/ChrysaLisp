(import 'class/view/view.inc)

(def-class 'canvas 'view)
(def-method 'create 'class/canvas/create 'static '(r0 r1 r2) '(r0))
(def-method 'new 'class/canvas/new 'static nil '(r0))
(def-method 'init 'class/canvas/init 'static '(r0 r1 r2 r3 r5) '(r0 r1))
(def-method 'swap 'class/canvas/swap 'static '(r0) '(r0))
(def-method 'resize 'class/canvas/resize 'static '(r0 r1) '(r0))
(def-method 'fill 'class/canvas/fill 'static '(r0 r1) '(r0))
(def-method 'set_clip 'class/canvas/set_clip 'static '(r0 r8 r9 r10 r11) '(r0))
(def-method 'set_pixel 'class/canvas/set_pixel 'static '(r0 r1 r8 r9) '(r0))
(def-method 'set_hline 'class/canvas/set_hline 'static '(r0 r1 r8 r9 r10) '(r0))

(def-method 'deinit 'class/canvas/deinit 'override)
(def-method 'pref_size 'class/canvas/pref_size 'override)
(def-method 'draw 'class/canvas/draw 'override)

(def-struct 'canvas 'view)
	(ulong 'texture)
	(int 'aa_scale)
	(int 'aa_scale_r)
	(ptr 'data)
	(puint 'resize_buf)
	(uint 'resize_buf_size)
	(uint 'width)
	(uint 'height)
	(uint 'stride)
	(uint 'cx)
	(uint 'cy)
	(uint 'cx1)
	(uint 'cy1)
(def-struct-end)