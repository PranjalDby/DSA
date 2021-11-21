function validate(form) {
    fail = validatefirstname(form.firstname.value);
    fail += validatelastname(form.latsname.value);
    fail += validateemail(form.email.value);
    fail += validatepassword(form.password.value);
    if (fail == "") {
        return true
    }
    else {
        alert(fail);
        return false
    }
}
function validatefirstname(field) {
    return (field == "") ? "first_name is missing:\n" : ""
}
function validatelastname(field) {
    return (field == "") ? "last_name is missing:\n" : ""
}
function validateemail(field){
    if (field == "") {
        return "no username was entered\n."
    }
    else if ((/[@]/.test(field))) {
        return "username must contain special symbol\n"
    }
}
function validatepassword(field)
{
    if(field=="")
    {
        return "password is missing.\n";
    }
    else if(field<6)
    {
        return "password must be '6' string long.\n";
    }
    else if((/[@,^,a-z,A-Z,0-9]/).test(field))
    {
        return "password contain special characters.\n";
    }
}
var arr=[1,4,5,6,6,6,7];
document.write(arr.length)
function toggle_theme(toggle)
{
    
}