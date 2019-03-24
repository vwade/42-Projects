if [ -z $1 ]
then
  echo error: No file specified.
  exit
fi
if [ -x $1 ]
then
  sh $1
fi
cat $1
