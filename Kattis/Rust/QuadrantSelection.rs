use std::io;

fn main() {
    println!("Enter the X and Y coordinate: ");
    
    let mut x = String::new();
    let mut y = String::new();

    io::stdin().read_line(&mut x).expect("Failed to read line.");
    io::stdin().read_line(&mut y).expect("Failed to read line.");
    
    let x: i32 = x.trim().parse().unwrap();
    let y: i32 = y.trim().parse().unwrap();

    if x > 0 && y > 0 {
        println!("1");
    } else if x > 0 && y < 0 {
        println!("4");
    } else if x < 0 && y > 0 {
        println!("2");
    } else {
        println!("3");
    }
}
