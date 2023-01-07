# QR Code Team Shawal

## Division of work

### Florence and Denise

Create graphical user interfaces in Qt creator one for an

- invigilator where they chose the exam then begin the scanning
- students where they generate their qr code from. A student should be able to input their details as required on the form.

### Shawal

Generate a function that ( experimenting zxing repo)

- gets student data from the GUI form and
- forms a qr code from that data
- which is saved in a printable image.

### Nicholas

Nicholas will generate a function that will

- read the qr code data and
- give out variables about student data(Name,reg no,course etc).

### Hajarah

- Write a function that writes data to a csv file 🗃️ or create it if it doesn't exist.
- Write another function to read the data and display it

## Implementation

### Generating Qr Code (Shawal)

cloned the zxing repository

```bash
    git clone https://github.com/zxing-cpp/zxing-cpp.git
```
