onerror=errorhandler;
function errorhandler(message,url,line)
{
    out=("sorry an error was encountered\n");
    out+="error\t"+message+"\n";
    out+="url is\t"+url;
    alert(out);
}
/*  let str= "the fast fox jump over a lazy dog";
with(str)
{
    document.write("string length is:\t"+length+toUpperCase())
} */
function O(i)
{
    return typeof i=='object'?i:document.getElementById(i);
}
function S(i)
{
    return O(i).style
}
S('paragraph').color='blue';
S('paragraph').text='lowercase';
/* 
function func(string,string1,string3)
{
     document.write(string)
}
func(string)
*/

