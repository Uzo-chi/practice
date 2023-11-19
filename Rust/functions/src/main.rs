fn main() {
    another_function(5);
    print_labeled_measurement(5, 'h');
    let y = {
        let x = 3;
        x + 1
    };
    println!("The value of y is: {y}");

    let a = plus_one(5);
    println!("The value of a is: {a}");
}

fn another_function(x: i32) {
    println!("Value of x: {x}");
}

fn print_labeled_measurement(value: i32, unit_label: char) {
    println!("The measurement is: {value}{unit_label}");
}

fn plus_one(x: i32) -> i32 {
    x + 1
}