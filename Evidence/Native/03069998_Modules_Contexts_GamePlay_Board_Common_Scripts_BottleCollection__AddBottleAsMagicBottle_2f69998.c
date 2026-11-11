/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBottleAsMagicBottle
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleAsMagicBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBottleAsMagicBottle
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleAsMagicBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleAsMagicBottle_2f69998
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000005c30913 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30913 = 1;
  }
  puVar3 = PTR_DAT_057b0e08;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057b0e08), lVar6 != 0))
  {
    uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
                      (param_1,*(undefined4 *)(lVar6 + 0x18),0,1);
    iVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                      (param_1);
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar8 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
                        (*(long *)(param_1 + 0x40),iVar5 == 3,*(undefined1 *)(param_1 + 0x59),
                         *(undefined1 *)(param_1 + 0x58),0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard_22f9e1c
                (param_1,uVar8,1,
                 *(char *)(param_1 + 0x58) != '\0' || *(char *)(param_1 + 0x59) != '\0',
                 *(char *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0);
      puVar4 = PTR_DAT_057b43e8;
      puVar2 = PTR_DAT_05793328;
      puVar1 = PTR_DAT_0576aae0;
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        iVar10 = 0;
        while (iVar10 < *(int *)(lVar6 + 0x18)) {
          lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar6,iVar10,*(undefined8 *)puVar3);
          if (lVar6 == 0) goto LAB_03069bd8;
          if (0 < *(int *)(lVar6 + 0x18)) {
            iVar11 = 0;
            do {
              lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar6,iVar11,*(undefined8 *)puVar4);
              if (lVar9 == 0) goto LAB_03069bd8;
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__MoveToOrigin_249419c
                        (0,0,lVar9,0);
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(lVar6 + 0x18));
          }
          lVar6 = *(long *)(param_1 + 0x18);
          iVar10 = iVar10 + 1;
          if (lVar6 == 0) goto LAB_03069bd8;
        }
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
                  (&uStack_78,param_1);
        if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
           (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
          lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar6,*(undefined8 *)puVar2);
          uStack_88 = uStack_70;
          uStack_90 = uStack_78;
          uStack_80 = uStack_68;
          if (lVar6 != 0) {
            uStack_a8 = uStack_70;
            uStack_b0 = uStack_78;
            uStack_a0 = uStack_68;
            Modules_Infrastructure_Common_Scripts_CameraService__UpdateInGameCamera_40e3024
                      (lVar6,&uStack_b0,iVar5 == 3,uVar8,0);
            return uVar7;
          }
        }
      }
    }
  }
LAB_03069bd8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

