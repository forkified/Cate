#ifndef PARSER_TOKENS
#define PARSER_TOKENS
#include "inc.hpp"
#include "colors.hpp"

/*
	why hello there!
	i know most of this is bad, i honestly don't care too much because it's my first project. -yogurt
*/

static string token_names[] = {
	"end of file",
	"a '.'",
	"a ','",
	"a ';'",
	"a '='",
	"a '{'",
	"a '}'",
	"a '('",
	"a ')'",
	"\"Project\"",
	"\"Library\"",
	"\"static\"",
	"\"dynamic\"",
	highlight_func("recursive"),
	"a string literal",
	"an identifier",
	highlight_func("system"),
	"\"true\"",
	"\"false\"",
};

enum ParserTokenKind: uint8_t
{
	END,
	DOT,
	COMMA,
	SEMICOLON,
	ASSIGN,
	LCURLY,
	RCURLY,
	LPAREN,
	RPAREN,
	PROJECT,
	LIBRARY,
	STATIC,
	DYNAMIC,
	RECURSIVE,
	STRING_LITERAL,
	IDENTIFIER,
	SYSTEM,
	B_TRUE,
	B_FALSE,
};
	
struct ParserToken
{
	ParserTokenKind type;
	std::string value;
	int32_t line;
};

#endif //PARSER_TOKENS