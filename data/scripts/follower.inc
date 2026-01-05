gText_FollowerDefault::
	.string "Your Pokémon is following you.$"

EventScript_Follower::
	lock
	msgbox gText_FollowerDefault, MSGBOX_DEFAULT
	release
	end
