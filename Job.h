#ifndef JOB_H
#define JOB_H
#pragma once

#include <string>
#include <iostream>

using namespace std;

// ���� �������̽�
class Job {
public:
    virtual string getJobName() const = 0;
    virtual ~Job() {}
    virtual void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& maxMp) const = 0;
    virtual void useSkill() const = 0;
};

// ���� ���� Ŭ����
class Warrior : public Job {
public:
    string getJobName() const override {
        return "Warrior";
    }

    void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& maxMp) const override {
        attack += 30;
        maxHelth += 70;
        attackspeed += 10;
    }

    void useSkill() const override {
        cout << "������ ��Ÿ�� ����մϴ�!" << endl;
    }
};

// ������ ���� Ŭ����
class Mage : public Job {
public:
    string getJobName() const override {
        return "Mage";
    }

    void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& maxMp) const override {
        attack += 25;
        maxHelth += 20;
        maxMp += 50;
        attackspeed += 5;
    }

    void useSkill() const override {
        cout << "�������� ȭ������ ����մϴ�!" << endl;
    }
};

// �ü� ���� Ŭ����
class Archer : public Job {
public:
    string getJobName() const override {
        return "Archer";
    }

    void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& mp) const override {
        attack += 20;
        maxHelth += 30;
        evasion += 0.1;
		attackspeed += 20;
		accuracy += 10;
    }

    void useSkill() const override {
        cout << "�ü��� ���� ����� ����մϴ�!" << endl;
    }
};

#endif