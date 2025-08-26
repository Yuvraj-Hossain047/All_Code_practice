let number = Number( prompt("Enter a Number:") ) ;

let res = isNaN(number) ? "invalid"    :
          number > 100 || number < 0 ? "Ya Sure???"  :
          number === 100 ? "Golden A+" :
          number >= 80   ? "A+"        :
          number >= 70   ? "B"         :          
          number >= 60   ? "C"         :          
          number >= 50   ? "D"         :          
                           "Fail"      ;
          
console.log("Your Result: ",res);
