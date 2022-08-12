// GitHub: EntityPlantt/Kattis
var l = null;
require("readline").createInterface({
	input: process.stdin,
	output: process.stdout
}).on("line", line => {
	if (l == null) {
		l = line.length;
	}
	else {
		console.log(l < line.length ? "no" : "go");
		process.exit();
	}
});