// GitHub: EntityPlantt/Kattis
require("readline").createInterface({input: process.stdin}).on("line", n => {
	var bi = 0n;
	for (var i = 0; i < n.length; i++) {
		bi *= 8n;
		bi += BigInt(n[i]);
	}
	console.log(bi.toString(16));
});