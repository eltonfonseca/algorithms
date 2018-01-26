<?php 
    function main()
    {
        $array = Array(1,2,3,4,5,6,7,8,9,10);
        if(search($array, 0, 10, 7))
            print("Find!\n");
        else
            print("Not Found!\n");
    }

    function search($array, $left, $right, $value)
    {
        while($left < $right)
        {
            $mid = $left + ($right - $left) / 2;

            if($array[$mid] == $value)
                return 1;
            else if($array[$mid] < $value)
                $left = $mid + 1;
            else 
                $right = $mid - 1;
        }
        return 0;
    }
    main();
?>