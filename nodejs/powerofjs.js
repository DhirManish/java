var startTime = Date.now();

for (var i = 0; i < 100000000000; i++) {
	var a = 12345 + 6789 + i;
	var b = 12345 * 6789 / 1234;
	//var c = Math.sqrt(a) + Math.pow(2, b);
}

console.log("Took " + ((Date.now() - startTime) / 1000) + " seconds to excecute");