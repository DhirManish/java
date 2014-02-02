/*
 * get.js
 * 
 * Copyright 2014 Ajay Bhatia <ajay@dumb-box>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

// Include http module
var http = require('http'),
// Add url module for parsing request parameters
	url = require('url');

// Create a local server and make it listen on 8080 port
http.createServer(function(req, res) {
	// Attach listener on end event
	req.on('end', function() {
		// Parse the request for arguments and store them in _get variable
		// This function parses the url from request and returns object representation
		var _get = url.parse(req.url, true).query;
		// Write headers to the response
		res.writeHead(200, {
			'Content-Type': 'text/plain'	
		});
		// Send data and end request
		res.end('You passed: ' + _get['data']);
	});
}).listen(8080);