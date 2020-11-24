//
// Created by nothrax on 23.11.20.
//

#ifndef SFC_MAINWINDOW_H
#define SFC_MAINWINDOW_H


#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include "vector"
#include "qcustomplot/qcustomplot.h"
#include "Swarm.h"
#include <QCheckBox>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private slots:
    void handleSimulationButton();
    void handleNextStepButton();
    void handleFunctionChange(const QString& command_text);
    void handleColorMapToggle(bool state);
    void handleStepToggle(bool state);
private:
    QPushButton *autoSimulationButton = nullptr;
    QPushButton *stepSimulationButton = nullptr;

    QCustomPlot *customPlot = nullptr;

    QSpinBox *numberOfStepsInput = nullptr;
    QLabel *numberOfStepsLabel = nullptr;

    QSpinBox *numberOfParticlesInput = nullptr;
    QLabel *numberOfParticlesLabel = nullptr;

    QDoubleSpinBox *errorInput = nullptr;
    QLabel *errorLabel = nullptr;

    QDoubleSpinBox *speedLimitInput = nullptr;
    QLabel *speedLimitLabel = nullptr;

    QLabel *bestPositionLabel = nullptr;
    QLabel *bestFitnessLabel = nullptr;
    QLabel *stepLabel = nullptr;

    QCheckBox *colorMapCheckbox = nullptr;
    QLabel *colorMapLabel = nullptr;

    QCheckBox *stepCheckbox = nullptr;
    QLabel *stepCheckboxLabel = nullptr;


    QCPColorMap *colorMap = nullptr;
    QCPColorScale *colorScale = nullptr;

    QLabel *functionSelectorLabel;
    QComboBox *functionSelector;

    QCPGraph* dwPoints = nullptr;
    QLabel *globalMinimaLabel = nullptr;

    bool autoSim = true;
    bool inSimulation = false;

    QStringList functions = {"Ackley", "Cross-in-tray", "Griewank", "Sphere", "Six-Hump Camel", "Easom", "Michalewicz" };
    std::vector<Point> particleLocation;
    unsigned int graphResolutionX = 0;
    unsigned int graphResolutionY = 0;
    double **functionArray = nullptr;

    SwarmOptions swarmOptions;
    Swarm *swarm = nullptr;
    int stepNumber = 0;

    void createSimulationButtons();
    void createInputs();
    void createDropdowns();
    void createPlot();

    void startAutoSimulation();
    void fillFunctionArray();
    void repaintGraph();
    void updateSwarmOptions();
    void setGuiForStepSimulation();
    void recoverGuiFromStepSimulation();
    void updateStepResults();
    void clearStepResults();
    //todo delete classky
};


#endif //SFC_MAINWINDOW_H
