/*
 * 这是Hexagon词法解析文件。
 * <Hexadecimal 15/12/13>
 */
%{
	
%}

%option c++

%%

"(" return LP;
")" return RP;

%%