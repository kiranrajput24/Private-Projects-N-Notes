ader();
    fin >> answer_key;
    while ((fin >> name >> key))
    {

        student_count++;
        score = countSocre(answer_key, key);
        total_Score += score;
        cout << setw(15) << left << name << setw(10) << right << score << endl;
    }
    printFooter(total_Score, student_count);
