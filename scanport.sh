
#!/bin/bash

ip=$1
startport=$2
endport=$3


function portscan
{
	for ((counter=$startport; counter<=$endport; counter++))
	do
		(echo > /dev/tcp/$ip/$counter) > /dev/null 2>&1 && echo "$counter open"
	done
}

