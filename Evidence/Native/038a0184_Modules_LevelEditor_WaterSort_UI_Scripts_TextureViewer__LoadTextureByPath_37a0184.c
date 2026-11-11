/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TextureViewer$$LoadTextureByPath
void Modules_LevelEditor_WaterSort_UI_Scripts_TextureViewer__LoadTextureByPath (Modules_LevelEditor_WaterSort_UI_Scripts_TextureViewer_o* __this, UnityEngine_Texture2D_o* texture2d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TextureViewer$$LoadTextureByPath
   void Modules_LevelEditor_WaterSort_UI_Scripts_TextureViewer__LoadTextureByPath
   (Modules_LevelEditor_WaterSort_UI_Scripts_TextureViewer_o* __this, UnityEngine_Texture2D_o*
   texture2d, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_TextureViewer__LoadTextureByPath_37a0184
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *(undefined8 *)(param_5 + 0x20) = param_6;
  FUN_012d0d74((undefined8 *)(param_5 + 0x20));
  plVar6 = *(long **)(param_5 + 0x18);
  lVar5 = Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__ConvertToSprite_37a00d4(param_6);
  puVar1 = PTR_DAT_0576c200;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2d9ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,lVar5,0);
    bRam0000000005c2d9ee = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plVar7 = plVar6 + 0x1a;
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar8,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar5 != 0) {
      uVar10 = UnityEngine_Sprite__get_rect_40965a4(lVar5,0);
      uStack_60 = CONCAT44(param_2,uVar10);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar13 = (float)UnityEngine_Rect__get_size_383cd70(&uStack_60,0);
      if (cRam0000000005c2345c == '\0') {
        FUN_012d0dc8(PTR_DAT_05803150);
        cRam0000000005c2345c = '\x01';
      }
      fVar13 = fVar13 - **(float **)(*(long *)PTR_DAT_05803150 + 0xb8);
      param_2 = param_2 - (*(float **)(*(long *)PTR_DAT_05803150 + 0xb8))[1];
      *(bool *)(plVar6 + 6) = fVar13 * fVar13 + param_2 * param_2 < _UNK_04321dec;
      uVar4 = UnityEngine_Sprite__get_texture_40966dc(lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar9 = 0;
LAB_02acec60:
      bVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,uVar9,0);
      *(byte *)((long)plVar6 + 0x31) = bVar2 & 1;
      plVar6[0x1a] = lVar5;
      FUN_012d0d74(plVar7,lVar5);
      (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
      UnityEngine_UI_Image__TrackSprite_29dbff8(plVar6);
      return;
    }
  }
  else {
    lVar8 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar8,lVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*plVar7 != 0) {
      uVar10 = UnityEngine_Sprite__get_rect_40965a4(*plVar7,0);
      uStack_60 = CONCAT44(param_2,uVar10);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar11 = (float)UnityEngine_Rect__get_size_383cd70(&uStack_60,0);
      fVar13 = param_2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = UnityEngine_Object__op_Implicit_4081098(lVar5,0);
      if ((uVar3 & 1) == 0) {
        if (cRam0000000005c2345c == '\0') {
          FUN_012d0dc8(PTR_DAT_05803150);
          cRam0000000005c2345c = '\x01';
        }
        fVar12 = **(float **)(*(long *)PTR_DAT_05803150 + 0xb8);
        fVar13 = (*(float **)(*(long *)PTR_DAT_05803150 + 0xb8))[1];
      }
      else {
        if (lVar5 == 0) goto LAB_02acecb8;
        uVar10 = UnityEngine_Sprite__get_rect_40965a4(lVar5,0);
        uStack_60 = CONCAT44(fVar13,uVar10);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar12 = (float)UnityEngine_Rect__get_size_383cd70(&uStack_60,0);
      }
      *(bool *)(plVar6 + 6) = fVar11 == fVar12 && param_2 == fVar13;
      if (plVar6[0x1a] != 0) {
        uVar4 = UnityEngine_Sprite__get_texture_40966dc(plVar6[0x1a],0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        uVar3 = UnityEngine_Object__op_Implicit_4081098(lVar5,0);
        uVar9 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) goto LAB_02acecb8;
          uVar9 = UnityEngine_Sprite__get_texture_40966dc(lVar5,0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        goto LAB_02acec60;
      }
    }
  }
LAB_02acecb8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

