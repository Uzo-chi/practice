fn main() {
   let mut s = String::from("lo");
   s.push('l');
   let s1 = String::from("Hello, ");
   let s2 = String::from("world!");
   let s3 = s1 + &s2;
}
