/*
 * Linear Search Recursive Algorithm in JavaScript
 * 
 * Author: Elton Fonseca 
 */

function main() 
{
    var array = [0,1,2,3,4,5,6,7,8,9,10];

    if(search(array, array.length - 1, 8))
        console.log("Find!");
    else
        console.log("Not Found!");
}

function search(array, element, value)
{
    if(element < 0)
        return false;
    else if(array[element] == value)
        return true;
    else 
        return search(array, element - 1, value);
}
main();