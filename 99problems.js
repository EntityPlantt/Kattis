// GitHub: EntityPlantt/Kattis
require("readline").createInterface({
	input: process.stdin,
	output: process.stdout
}).on("line", n => {
	n = parseInt(n);
	if (n < 100) {
		console.log(99);
	}
	else if (Math.floor(n / 100) * 100 + 99 - n > n - Math.floor(n / 100) * 100 + 1) {
		console.log(Math.floor(n / 100) * 100 - 1);
	}
	else {
		console.log(Math.floor(n / 100) + "99");
	}
	return 0;
});