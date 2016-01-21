note
	description: "Summary description for {GAME_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	GAME_ACCESS

feature -- Games
	game: GAME -- "DO" MODIFIED TO "ONCE"
		once
			create Result.make_from_board (
				create {BOARD}.make_default)
		end

invariant
	game = game
end
