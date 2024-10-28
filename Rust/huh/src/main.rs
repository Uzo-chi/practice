fn main() {
    let name = String::from("Brian");
    println!("{}", name.chars().all(char::is_alphabetic));
    for i in name.chars() {
        if i.is_uppercase() {
            println!("{i}");
            println!("Uppercase");
        } else {
            println!("{i}");
        }
    }
}