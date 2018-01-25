<?php 
    function main()
    {
        $array = Array(1,2,3,4,5,6,7,8,9,10);
        if(search($array, 9))
            print("Find!\n");
        else
            print("Not Found!\n");
    }

    function search(Array $array, $value)
    {
        foreach($array as $i)
        {
            if($i === $value)
                return true;
        }
        return false;
    }

    main();
?>