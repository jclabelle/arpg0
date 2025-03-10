#pragma once
enum class SpriteRotation
{
	NO_ROTATION = 1,
	FOUR_WAY = 2,
	FLIP = 3,

	UP_TO_DOWN = 4,
	UP_TO_LEFT = 5,
	UP_TO_RIGHT = 6,
	DOWN_TO_UP = 7,
	DOWN_TO_LEFT = 8,
	DOWN_TO_RIGHT = 9,
	LEFT_TO_UP = 10,
	LEFT_TO_DOWN = 11,
	LEFT_TO_RIGHT = 12,
	RIGHT_TO_UP = 13,
	RIGHT_TO_DOWN = 14,
	RIGHT_TO_LEFT = 15,

	USE_OWNER_ROTATION = 16,

	SPRITE_ROTATION_MAX
};