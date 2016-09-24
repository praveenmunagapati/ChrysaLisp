%include 'inc/func.inc'
%include 'class/class_unordered_set.inc'
%include 'class/class_unordered_map.inc'
%include 'cmd/lisp/class_lisp.inc'

	def_function cmd/lisp/deinit
		;inputs
		;r0 = object
		;trashes
		;all

		ptr this

		push_scope
		retire {r0}, {this}

		;deinit myself
		static_call unordered_set, deref, {this->lisp_symbols}
		static_call unordered_map, deref, {this->lisp_enviroment}

		;dinit parent
		super_call lisp, deinit, {this}

		pop_scope
		return

	def_function_end
