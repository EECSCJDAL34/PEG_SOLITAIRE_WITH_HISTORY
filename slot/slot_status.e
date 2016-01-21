note
	description: "Summary description for {SLOT_STATUS}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SLOT_STATUS

inherit
	ANY
		redefine
			is_equal
		end

feature -- Equality
	is_equal(other: like Current): BOOLEAN
			-- Is the current slot status equal to 'other'?
		do
			Result := out ~ other.out
		ensure then
			correct_result:
				Result = (out ~ other.out)
		end
end
