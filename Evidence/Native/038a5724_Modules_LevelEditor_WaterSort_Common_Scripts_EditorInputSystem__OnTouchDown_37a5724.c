/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnTouchDown
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnTouchDown (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038a453c) */
/* WARNING: Removing unreachable block (ram,0x038a4540) */
/* WARNING: Removing unreachable block (ram,0x038a4388) */
/* WARNING: Removing unreachable block (ram,0x038a463c) */
/* WARNING: Removing unreachable block (ram,0x038a475c) */
/* WARNING: Removing unreachable block (ram,0x038a45f4) */
/* WARNING: Removing unreachable block (ram,0x038a4768) */
/* WARNING: Removing unreachable block (ram,0x038a46fc) */
/* WARNING: Removing unreachable block (ram,0x038a4890) */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnTouchDown
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnTouchDown
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnTouchDown_37a5724
               (float param_1,float param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  
  uVar9 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__IsPointerOverUIGameObject_37a5a88
                    ();
  if ((uVar9 & 1) != 0) {
    return;
  }
  plVar12 = (long *)(param_3 + 0x10);
  if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x50), lVar10 == 0)) goto LAB_038a5a84;
  fVar17 = *(float *)(lVar10 + 0x20);
  Modules_LevelEditor_WaterSort_Common_GridRenderer__GetRoundedSnapPosition_37a13e8
            (param_1 + 0.0,param_2 + -0.25);
  if (*(int *)(param_3 + 0x2c) - 1U < 7) {
    fVar13 = fVar17 * (float)(int)(param_1 / fVar17);
    fVar17 = fVar17 * (float)(int)(param_2 / fVar17);
    switch(*(int *)(param_3 + 0x2c)) {
    case 1:
      if (*plVar12 == 0) {
LAB_038a5a84:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBottle_37a5ae8
                (fVar13,fVar17,0,*plVar12,*(undefined4 *)(param_3 + 0x40));
      break;
    case 3:
      if (*plVar12 == 0) goto LAB_038a5a84;
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__RemoveBottle_37a6094
                (fVar13,fVar17,0);
      break;
    case 4:
      switch(*(undefined4 *)(param_3 + 0x44)) {
      case 2:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawWater_37a5b0c
                  (*plVar12,*(undefined8 *)(param_3 + 0x38));
        break;
      case 3:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawQuestionMark_37a5b30
                  (*plVar12,*(undefined8 *)(param_3 + 0x38));
        break;
      case 4:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawCurtain_37a5b54
                  (*plVar12,*(undefined8 *)(param_3 + 0x38));
        break;
      case 5:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawClay_37a5c60();
        break;
      case 6:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawPlaster_37a5c3c();
        break;
      case 7:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawTag_37a5c84
                  (*plVar12,*(undefined8 *)(param_3 + 0x38));
        break;
      case 8:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawIce_37a5db4
                  (*plVar12,*(undefined4 *)(param_3 + 0x4c));
        break;
      case 9:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawGenerator_37a5dfc();
        break;
      case 10:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawWoodbox_37a5d90
                  (*plVar12,*(undefined4 *)(param_3 + 0x48));
        break;
      case 0xb:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawWoodenBoxKey_37a5d6c
                  (*plVar12,*(undefined4 *)(param_3 + 0x48));
        break;
      case 0xc:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawCarpet_37a5dd8
                  (*plVar12,*(undefined4 *)(param_3 + 0x4c));
        break;
      case 0xe:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawToggle_37a5e20();
        break;
      case 0xf:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawIvy_37a5e44
                  (*plVar12,*(undefined8 *)(param_3 + 0x38));
        break;
      case 0x10:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFrog_37a5f2c
                  (*plVar12,*(undefined4 *)(param_3 + 0x4c));
        break;
      case 0x11:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawMagicSeal_37a5f50();
        break;
      case 0x12:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDuck_37a5f74
                  (*plVar12,*(undefined4 *)(param_3 + 0x4c));
        break;
      case 0x13:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDuckHouse_37a5f98
                  (*plVar12,*(undefined4 *)(param_3 + 0x4c));
        break;
      case 0x14:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawSafe_37a5fbc
                  (*plVar12,*(undefined4 *)(param_3 + 0x4c));
        break;
      case 0x17:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawBag_37a5fe0();
        break;
      case 0x18:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawFirework_37a6028();
        break;
      case 0x19:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawRainbow_37a604c();
        break;
      case 0x1a:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawIcicle_37a6070();
        break;
      case 0x1b:
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawMosaic_37a6004
                  (*plVar12,*(undefined8 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x4c));
      }
      break;
    case 5:
      if (*plVar12 == 0) goto LAB_038a5a84;
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__RemoveBoardItem_37a60b8();
      break;
    case 6:
      if ((*plVar12 == 0) || (*(long *)(*plVar12 + 0x50) == 0)) goto LAB_038a5a84;
      break;
    case 7:
      iVar8 = *(int *)(param_3 + 0x30);
      if (iVar8 == 3) {
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawPartialLuckBottle_37a6238
                  (fVar13,fVar17,*plVar12,*(undefined4 *)(param_3 + 0x40));
      }
      else if (iVar8 == 2) {
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawLuckBottle_37a6170
                  (fVar13,fVar17,*plVar12,*(undefined4 *)(param_3 + 0x40));
      }
      else if (iVar8 == 1) {
        if (*plVar12 == 0) goto LAB_038a5a84;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawDeterBottle_37a60dc
                  (fVar13,fVar17,*plVar12,*(undefined4 *)(param_3 + 0x40));
      }
    }
  }
  puVar2 = PTR_DAT_0575f588;
  if ((bRam0000000005c33e0e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e9200);
    FUN_012d0dc8(PTR_DAT_057a6b48);
    FUN_012d0dc8(PTR_DAT_057c0e98);
    FUN_012d0dc8(PTR_DAT_057e1b00);
    FUN_012d0dc8(PTR_DAT_057ac370);
    FUN_012d0dc8(PTR_DAT_0575f588);
    FUN_012d0dc8(PTR_DAT_05801f38);
    FUN_012d0dc8(PTR_DAT_0580df18);
    FUN_012d0dc8(PTR_DAT_057ee958);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
    FUN_012d0dc8(PTR_DAT_0578b630);
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057894d0);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_057c8358);
    FUN_012d0dc8(PTR_DAT_05784928);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_057e1228);
    FUN_012d0dc8(PTR_DAT_057cc050);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
    FUN_012d0dc8(PTR_DAT_057b4dd0);
    FUN_012d0dc8(PTR_DAT_057cc6f0);
    FUN_012d0dc8(PTR_DAT_057d9738);
    FUN_012d0dc8(PTR_DAT_05758ad0);
    FUN_012d0dc8(PTR_DAT_057f6050);
    FUN_012d0dc8(PTR_DAT_057d7b88);
    FUN_012d0dc8(PTR_DAT_057d2fc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057d0e68);
    bRam0000000005c33e0e = 1;
  }
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_100 = 0;
  uStack_118 = 0;
  plStack_110 = (long *)0x0;
  uStack_120 = 0;
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar10 != 0) {
    System_Collections_Generic_Dictionary_Color__int____ctor_41ae984
              (lVar10,*(undefined8 *)PTR_DAT_057c0e98);
    puVar7 = PTR_DAT_057e9200;
    puVar6 = PTR_DAT_057e1b00;
    puVar5 = PTR_DAT_057d60c8;
    puVar4 = PTR_DAT_057ac370;
    puVar3 = PTR_DAT_057a6b48;
    puVar2 = PTR_DAT_057894d0;
    if (((*(long *)(param_3 + 0x10) != 0) &&
        (lVar11 = *(long *)(*(long *)(param_3 + 0x10) + 0x48), lVar11 != 0)) &&
       (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_138,lVar11,*(undefined8 *)PTR_DAT_057d9738);
      uStack_98 = uStack_130;
      uStack_a0 = uStack_138;
      plStack_90 = plStack_128;
      while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_a0,*(undefined8 *)PTR_DAT_05784928), (uVar9 & 1) != 0) {
        if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_138,plStack_90,*(undefined8 *)PTR_DAT_057cc6f0);
        uStack_b8 = uStack_130;
        uStack_c0 = uStack_138;
        plStack_b0 = plStack_128;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_c0,*(undefined8 *)PTR_DAT_057c8358), plVar12 = plStack_b0,
              (uVar9 & 1) != 0) {
          if (plStack_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (plStack_b0[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_138,plStack_b0[0xc],*(undefined8 *)PTR_DAT_05758ad0);
          uStack_d8 = uStack_130;
          uStack_e0 = uStack_138;
          plStack_d0 = plStack_128;
          while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_e0,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
            if (plStack_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (plStack_d0[4] != 0) {
              lVar11 = *(long *)(plStack_d0[4] + 0x40);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar9 = System_Collections_Generic_Dictionary_Color__int___ContainsKey_41af64c
                                (*(undefined4 *)(lVar11 + 0x50),*(undefined4 *)(lVar11 + 0x54),
                                 *(undefined4 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x5c),
                                 lVar10,*(undefined8 *)puVar3);
              uVar18 = *(undefined4 *)(lVar11 + 0x50);
              uVar16 = *(undefined4 *)(lVar11 + 0x54);
              uVar15 = *(undefined4 *)(lVar11 + 0x58);
              uVar14 = *(undefined4 *)(lVar11 + 0x5c);
              if ((uVar9 & 1) == 0) {
                System_Collections_Generic_Dictionary_Color__int___Add_41af430
                          (uVar18,uVar16,uVar15,uVar14,lVar10,1,*(undefined8 *)puVar7);
              }
              else {
                iVar8 = System_Collections_Generic_Dictionary_Color__int___get_Item_41af35c
                                  (uVar18,uVar16,uVar15,uVar14,lVar10,*(undefined8 *)puVar6);
                System_Collections_Generic_Dictionary_Color__int___set_Item_41af418
                          (uVar18,uVar16,uVar15,uVar14,lVar10,iVar8 + 1,*(undefined8 *)puVar4);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_e0,*(undefined8 *)PTR_DAT_0578b630);
          if (plVar12[0xd] != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_138,plVar12[0xd],*(undefined8 *)PTR_DAT_057d7b88);
            uStack_f8 = uStack_130;
            uStack_100 = uStack_138;
            plStack_f0 = plStack_128;
            while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_100,*(undefined8 *)PTR_DAT_05797338), (uVar9 & 1) != 0
                  ) {
              if (plStack_f0 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_05801f38 + 300);
                if ((bVar1 <= *(byte *)(*plStack_f0 + 300)) &&
                   (*(long *)(*(long *)(*plStack_f0 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_05801f38)) {
                  lVar11 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetWaterColorIds_3dda320
                                     (plStack_f0,0);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                            (&uStack_138,lVar11,*(undefined8 *)PTR_DAT_057f6050);
                  uStack_118 = uStack_130;
                  uStack_120 = uStack_138;
                  plStack_110 = plStack_128;
                  while (uVar9 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                                           (&uStack_120,*(undefined8 *)puVar5),
                        plVar12 = plStack_110, (uVar9 & 1) != 0) {
                    if (*(long *)(param_3 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                       (*(long *)(param_3 + 0x78),(ulong)plStack_110 & 0xffffffff,0)
                    ;
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    uVar9 = System_Collections_Generic_Dictionary_Color__int___ContainsKey_41af64c
                                      (*(undefined4 *)(lVar11 + 0x50),*(undefined4 *)(lVar11 + 0x54)
                                       ,*(undefined4 *)(lVar11 + 0x58),
                                       *(undefined4 *)(lVar11 + 0x5c),lVar10,*(undefined8 *)puVar3);
                    lVar11 = *(long *)(param_3 + 0x78);
                    if ((uVar9 & 1) == 0) {
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                         (lVar11,(ulong)plVar12 & 0xffffffff,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      System_Collections_Generic_Dictionary_Color__int___Add_41af430
                                (*(undefined4 *)(lVar11 + 0x50),*(undefined4 *)(lVar11 + 0x54),
                                 *(undefined4 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x5c),
                                 lVar10,1,*(undefined8 *)puVar7);
                    }
                    else {
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                         (lVar11,(ulong)plVar12 & 0xffffffff,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      uVar14 = *(undefined4 *)(lVar11 + 0x50);
                      uVar15 = *(undefined4 *)(lVar11 + 0x54);
                      uVar16 = *(undefined4 *)(lVar11 + 0x58);
                      uVar18 = *(undefined4 *)(lVar11 + 0x5c);
                      iVar8 = System_Collections_Generic_Dictionary_Color__int___get_Item_41af35c
                                        (uVar14,uVar15,uVar16,uVar18,lVar10,*(undefined8 *)puVar6);
                      System_Collections_Generic_Dictionary_Color__int___set_Item_41af418
                                (uVar14,uVar15,uVar16,uVar18,lVar10,iVar8 + 1,*(undefined8 *)puVar4)
                      ;
                    }
                  }
                  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                            (&uStack_120,*(undefined8 *)PTR_DAT_05817840);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_100,*(undefined8 *)PTR_DAT_057c2cf0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_c0,*(undefined8 *)PTR_DAT_057ee958);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)PTR_DAT_0580df18);
      if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar11 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                         (*(undefined8 *)PTR_DAT_057d2fc8);
      if (lVar11 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                  (lVar11,lVar10,*(undefined8 *)PTR_DAT_057d0e68);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

