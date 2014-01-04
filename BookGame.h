// -*- c++ -*-
// Copyright 2008 Isis Innovation Limited
//
// EyeGame.h
// Declares the EyeGame class
// EyeGame is a trivial AR app which draws some 3D graphics
// Draws a bunch of 3d eyeballs remniscient of the 
// AVL logo
//
#ifndef __BOOKGAME_H
#define __BOOKGAME_H

#include <TooN/TooN.h>
#include "OpenGL.h"
#include "MLDriver.h"

using namespace TooN;

class BookGame
{
 public:
  BookGame();
  void UpdateScale(double dScale);
  void UpdateSummary(ARSummary* pChapSummary);
  void DrawStuff(Vector<3> v3CameraPos);
  void Reset();
  void Init();

 protected:
  bool mbInitialised;
  void DrawCube(GLfloat size, GLenum type);
  void DrawSquare(GLfloat size, GLenum type);

  std::vector<GLuint> mvHistDisplayList;
  double mdScale;
  int mnFrameCounter;

  bool mbHasSummary;
  ARSummary* mpChapSummary;

};


#endif
