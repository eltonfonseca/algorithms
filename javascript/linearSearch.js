/*
 * Linear Search Algorithm in JavaScript
 * 
 * Author: Elton Fonseca 
 */

function main() 
{
    var array = [0,1,2,3,4,5,6,7,8,9,10];

    if(search(array, 11))
        console.log("Find!");
    else
        console.log("Not Found!");
}

function search(array, value)
{
    for(var i = 0; i < array.length; i++)
    {
        if(value == array[i])
            return true;
    }
    return false;
}
main();