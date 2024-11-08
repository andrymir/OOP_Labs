#include "csvreader.h"

CSVReader::CSVReader(const QString& file_name)
{
 fin.open(file_name.toLatin1().data());
}
CSVReader::~CSVReader(){
    fin.close();
}
std::vector<std::string> split(const std::string& str, char delim)
{
    std::vector<std::string> tokens;

    if (!str.empty())
    {
        size_t start = 0, end;
        do {
            end = str.find(delim, start);
            tokens.push_back(str.substr(start, (end - start)));

            start = end + 1;
        } while (end != std::string::npos);
    }

    return tokens;
}


CSVReader& CSVReader::operator=(CSVReader&& orher){
    fin = std::move(orher.fin);
    return *this;
}

CSVReader::CSVReader(CSVReader&& orther){
    fin = std::move(orther.fin);
}

AbstractReader& CSVReader::operator>> (Cars &car){
    if (fin.eof()) {flag = false;}
    else {flag = true;};
    std::string line;
    getline(fin, line);

    if (!line.empty()){
        auto v = split(line, ';');

        car.n = std::stoi(v[0]);
        car.model = QString::fromStdString(v[1]);
        car.color = static_cast<Color>(stoi(v[2]));
        car.year = stoi(v[3]);}
return *this;
}

