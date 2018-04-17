#pragma once

#include "MappedFileReader.h"
#include "filter_statemachine.h"

class CLogReader
{
public:
  CLogReader();
  ~CLogReader();

  bool    Open(const TCHAR * filename);                         // �������� �����, false - ������
  void    Close();                        // �������� �����

  bool    SetFilter(const char *filter);  // ��������� ������� �����, false - ������
  bool    GetNextLine(char *buf,          // ������ ��������� ��������� ������, 
    const int bufsize);                   // buf - �����, bufsize - ������������ �����
                                          // false - ����� ����� ��� ������};
private:
  CMappedFileReader file_reader_;
  filter_statemachine filter_;
};

inline bool CLogReader::Open(const TCHAR * filename) {
  return file_reader_.Open(filename);
}

inline void CLogReader::Close() {
  file_reader_.Close();
}

