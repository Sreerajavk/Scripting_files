if [ $# -ne 2 ]
then
  echo "Invalid no of arguments"
  exit
else
  echo $1  $2
fi

if [ ! -f $1  ]
then
  echo "File not  exits"
  exit

  
fi

if  grep "$2" "$1"
then 
  echo "Username already exits"
   
else
   echo "$2" >> "$1"
 
   
fi
