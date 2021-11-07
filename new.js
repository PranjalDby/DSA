console.log("hello world");
let x=22;
let y=20;
console.log(x+y);
/* function in java script */
function display(a,b)
{
    console.log(a,b);
}
let a="hello world";
let b="hey there";
display(a,b);
//array 
let array=['0',1,2,'3',4,5,6,7,8,9];
for(let i=0;i<10;i++)
{
    console.log(array[i]);
}
/* note:1--if color is green means data is type of number
note:2--if color is black means data is type of string */
console.log('\n')
console.log("passing array to function")
function arr(size,arr)
{   
    for( let i=0;i<size;i++)
    {
    console.log(arr[i])
    }
}
arr(10,array);
console.log("conditional statements:\n");
let age =18;
console.log("enter the age:\n");
if(age<18)
{
    console.log("your are a child\n");
}
else if(age>18)
{
    console.log("you are not a child:\n");
}
else if(age==18)
{
    console.log("you are a teenager:\n");
}