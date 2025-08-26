let str = "    ABcdefghijklm nopQrst UVwxyz   ";
let abcd = {
    a: 1,
    b: "alphabet",
    c: 7,
    d: "me"
}
console.log("string size:", str.length);
console.log(str);
str = str.trim();
str = str.toLowerCase();
console.log(str);
str = str.toUpperCase();
console.log(str);
console.log("string size:", str.length);
console.log(typeof str);
console.log(str.slice(0, 14));


console.log(typeof abcd);
console.log("i want to get whats in a", abcd.a, "also want to get b", abcd.b, "and c with d", abcd.c, abcd.d);

let out= `i want to get whats in a ${abcd.a} also want to get b ${abcd.b} and c with d ${abcd.c} ${abcd.d}`;
console.log(out);

let str1= "AB";
let str2= "CD";

console.log(str1 + str2);
console.log(str1.concat(str2));

let str3= "hallo hallo hallo hallo";
console.log(str3.replace( "a" ,"e" ));
console.log(str3.replaceAll( "a" ,"e" ));
console.log(str3.charAt(4));
