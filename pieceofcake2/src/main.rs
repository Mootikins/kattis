use std::io;

fn main() -> io::Result<()> {
	let mut input = String::new();
	io::stdin().read_line(&mut input)?;

	let nums: Vec<i32> = input
		.trim()
		.split_whitespace()
		.into_iter()
		.map(|num| num.parse::<i32>().unwrap())
		.collect();

	let cut1 = std::cmp::max(nums[1], nums[0] - nums[1]);
	let cut2 = std::cmp::max(nums[2], nums[0] - nums[2]);

	println!("{}", cut1 * cut2 * 4);

	Ok(())
}
