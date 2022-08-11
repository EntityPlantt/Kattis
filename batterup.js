const {createInterface} = require("readline");
const rl = createInterface({
	input: process.stdin,
	output: process.stdout
});
var n = null, t = 0;
rl.on("line", line => {
	if (n == null) {
		n = parseInt(line);
	}
	else {
		line = line.split(" ").map(x => parseInt(x));
		line.forEach(int => {
			if (int < 0) {
				n--;
			}
			else {
				t += int;
			}
		});
		console.log(t / n);
	}
});