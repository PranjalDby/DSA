let id=document.getElementById('fff');
id.style.color="red"
id.style.borderRadius="2px"
id.style.border="solid"
let tn=document.getElementsByTagName('div');
let create=document.createElement('h2');
create.innerText="hello world";
tn[0].appendChild(create)
document.addEventListener('onmousehovers()',function()
{
    
});
function onmousehovers()
{
    console.log("set")
}