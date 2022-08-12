// GitHub: EntityPlantt/Kattis
// Wrong Answer
var vars;
require("readline").createInterface({
	input: process.stdin,
	output: process.stdout
}).on("line", line => {
	if (vars) {
		console.log(Array.from(line).map(elm => vars[elm.charCodeAt(0) - 65]).join(" "));
	}
	else {
		vars = line.split(" ").sort();
	}
});