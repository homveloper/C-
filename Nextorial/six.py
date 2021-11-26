import re

def validateAddresses(addresses):

    for address in addresses:
        
        ipv6 = address.split(":")
        ipv4 = address.split(".")

        # ipv4

        if len(ipv4) > 1:

            # octal check
            for i in ipv4:
                if int(i) >= 8 and len(i) >= 3:
                    print("Neither")
                    break
                
                if 0 < int(i) > 255:
                    print("Neither")
                    break

            print("IPv4")

        # ipv6
        # elif len(ipv6) >  1:

        #     for i in ipv6:


print("121.18.19.20".split("."))


print("008".isdigit())