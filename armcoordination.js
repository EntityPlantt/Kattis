// GitHub: EntityPlantt/Kattis
var x, y, r;
require("readline").createInterface({input: process.stdin}).on("line", line => {
	line = line.split(" ").map(e => parseInt(e));
	if (x == undefined) {
		x = line[0];
		y = line[1];
	}
	else {
		r = line[0];
		console.log(x - r, y - r);
		console.log(x + r, y - r);
		console.log(x + r, y + r);
		console.log(x - r, y + r);
		process.exit();
	}
});