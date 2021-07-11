day = int(input("Input birthday: "))
month = input("Input month of birth(e.g. march,july,etc): ")

if month == 'december':
    sign = 'Sagittarius' if (day<22) else 'Capricorn'
    print("Your Astrological sign is: "+sign)

elif month == 'january':
    sign = 'Capricorn' if (day<20) else 'Aquarius'
    print("Your Astrological sign is: "+sign)
    
elif month == 'february':
    sign = 'Aquarius' if (day<20) else 'Pisces'
    print("Your Astrological sign is: "+sign)

elif month == 'march':
    sign = 'Pisces' if (day<21) else 'Aries'
    print("Your Astrological sign is: "+sign)

elif month == 'april':
    sign = 'Aries' if (day<21) else 'Taurus'
    print("Your Astrological sign is: "+sign)

elif month == 'may':
    sign = 'Taurus' if (day<22) else 'Gemini'
    print("Your Astrological sign is: "+sign)

elif month == 'june':
    sign = 'Gemini' if (day<22) else 'Cancer'
    print("Your Astrological sign is: "+sign)

elif month == 'july':
    sign = 'Cancer' if (day<23) else 'Leo'
    print("Your Astrological sign is: "+sign)

elif month == 'august':
    sign = 'Leo' if (day<24) else 'Virgo'
    print("Your Astrological sign is: "+sign)

elif month == 'september':
    sign = 'Virgo' if (day<24) else 'Libra'
    print("Your Astrological sign is: "+sign)

elif month == 'october':
    sign = 'Libra' if (day<24) else 'Scorpio'
    print("Your Astrological sign is: "+sign)

elif month == 'november':
    sign = 'Scorpio' if (day<23) else 'Sagittarius'
    print("Your Astrological sign is: "+sign)

else:
    print("Invalid Month Entered")
