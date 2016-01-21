note
	description : "peg_solitaire application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ES_SUITE

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			add_test (create {TEST_SOLITAIRE_UI}.make)

			show_browser
			run_espec
		end

end
