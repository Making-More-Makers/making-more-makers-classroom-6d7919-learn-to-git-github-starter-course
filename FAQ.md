# FAQ - Frequently Asked Questions

Quick answers to common questions!

---

## Git & GitHub

### Q: How to resolve merge conflicts?

**A:** Follow these steps:

1. Open the conflicted file
2. Look for conflict markers: \<<<<<<<\, \=======\, \>>>>>>>\
3. Choose which changes to keep
4. Remove conflict markers
5. Save and commit:
   \\\ash
   git add .
   git commit -m "Resolve merge conflict"
   git push
   \\\

### Q: Permission denied (publickey) error?

**A:** Use HTTPS instead of SSH:

\\\ash
git remote set-url origin https://github.com/username/repo.git
\\\

---

## Arduino & Hardware

### Q: Code won't upload to Arduino?

**A:** Check:
- Correct board type (Tools 鈫?Board)
- Correct port (Tools 鈫?Port)
- USB cable connected properly
- Drivers installed
- No other program using serial port

### Q: LED not lighting up?

**A:** Check:
- LED polarity (long leg is positive +)
- Using resistor (220惟)
- Pin number correct
- Power connections (5V/GND)
- Try another LED

### Q: Sensor not reading values?

**A:** Debug steps:

1. Check wiring:
   - VCC 鈫?3.3V or 5V
   - GND 鈫?GND
   - Signal 鈫?correct pin

2. Use Serial Monitor:
   \\\cpp
   Serial.begin(9600);
   Serial.println(sensorValue);
   \\\

3. Verify pin definitions
4. Test sensor (try another one)

---

## Assignments

### Q: Can I use code from the internet?

**A:** Yes, but you must:

鉁?Fully understand how it works
鉁?Make your own modifications
鉁?Credit the source in README
鉁?Not copy entire project

鉂?Not allowed:
- Copy code you don't understand
- Not credit sources
- Copy classmates' work

### Q: Late submission penalty?

**A:** 

| Time | Penalty |
|------|---------|
| On time | 0% |
| Within 24h | -10% |
| 24-48h | -20% |
| 48-72h | -30% |
| Over 72h | Not accepted |

---

## Team Collaboration

### Q: Team member not participating?

**A:** 

1. **Communicate first**: Ask if they need help
2. **Document contributions**: Git commits, Issues
3. **Contact instructor**: If problem persists

### Q: How to divide team tasks?

**A:** Use GitHub tools:

1. **Issues**: Create task for each item, assign members
2. **Projects**: Visual kanban board
3. **Regular meetings**: Daily standups (Days 3-5)

---

## Course Policy

### Q: Can I miss class?

**A:** 
- Notify instructor in advance
- Watch recorded materials (if available)
- Complete that day's assignments
- Ask classmates for notes

### Q: Where to ask questions?

**A:** 

| Question Type | Channel |
|---------------|---------|
| Technical | [GitHub Issue](https://github.com/Making-More-Makers/making-more-makers-classroom-6d7919-learn-to-git-github-starter-course/issues/new?template=question.md) |
| Assignment | Issue or ask in class |
| Personal | Email instructor |
| Urgent | Contact instructor directly |

---

## Need More Help?

1. **Search Issues**: Check [closed issues](https://github.com/Making-More-Makers/making-more-makers-classroom-6d7919-learn-to-git-github-starter-course/issues?q=is%3Aissue+is%3Aclosed)
2. **Create New Issue**: [Ask Question](https://github.com/Making-More-Makers/making-more-makers-classroom-6d7919-learn-to-git-github-starter-course/issues/new?template=question.md)
3. **Ask Classmates**: Class discussions
4. **Ask Instructor/TA**: Office hours, email

---

[鈫?Back to Home](Home)