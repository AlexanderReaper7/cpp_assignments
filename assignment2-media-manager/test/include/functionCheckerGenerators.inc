#include "magic.hpp"

GENERATE_HAS_CONST_MEMBER_FUNCTION(equalsOp, operator==)
GENERATE_HAS_CONST_MEMBER_FUNCTION(inEqualsOp, operator!=)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getTitle)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getYear)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(prettyPrint)

//Ps2Game
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getStudio)

//Vinyl
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getType)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getArtist)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getRuntime)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getTracks)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(addTrack)

//Book
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getAuthor)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getIsbn)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getPages)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getEdition)

//MediaManager

