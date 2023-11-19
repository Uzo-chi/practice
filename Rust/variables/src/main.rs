fn main() {
    let x = 5;
    let x = x + 1;

    {
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }

    println!("The value of x is: {x}");
   
   let difference = 95.5 - 4.3;
   println!("Difference: {}", difference);

   let c = 'z';
   let z: char = '╥';
   let weird_symbol = '╒';

   println!("{}{}{}", c, z, weird_symbol);

   let string = "  Banana ";
   println!("untrimmed: {}", string);
   println!("trimmed: {}", string.trim());
}