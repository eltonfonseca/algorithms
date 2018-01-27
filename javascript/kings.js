/*************************************************************************
*                   The Problem Solved Kings in JavaScript               *
* ---------------------------------------------------------------------- *
*                                                                        *
* POC: $ node kings                                                      *
*                                                                        *
* Autor: Elton Fonseca                                                   *
* http://www.fb.com/elton.junior6                                        *
**************************************************************************/

function kings(rows, columns)
{
    var i = 1, king = 0, j = 1;

    while(i <= rows)
    {
        j = 1;
        while(j <= columns)
        {
            king++;
            j += 2;
        }
        i += 2;
    }
    console.log(king);
}

kings(10, 10);