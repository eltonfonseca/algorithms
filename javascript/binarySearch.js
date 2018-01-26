/**
 * Binary Search Algorithm in JavaScript
 * 
 * Author: Elton Fonseca
 */

function main()
{
    var array = [1,2,3,4,5,6,7,8,9,10];
    var element = 10;

    if(search(array, 0, array.length - 1, element))
        console.log("Find!");
    else    
        console.log("Not Found!");
}

function search(array, low, high, element)
{
    while(low <= high)
    {
        middle = Math.floor((low + high) / 2);
        if(array[middle] == element)
            return true;
        else if(array[middle] < element)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return false;
}
main();