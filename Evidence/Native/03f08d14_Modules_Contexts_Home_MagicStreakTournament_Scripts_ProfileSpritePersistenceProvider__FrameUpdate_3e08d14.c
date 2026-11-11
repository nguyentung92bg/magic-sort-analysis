/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$FrameUpdate
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__FrameUpdate (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this, float elapsedSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$FrameUpdate
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__FrameUpdate
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this,
   float elapsedSeconds, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__FrameUpdate_3e08d14
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 extraout_x1;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000005c38040 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575aea0);
    FUN_012d0dc8(PTR_DAT_05818970);
    FUN_012d0dc8(PTR_DAT_057d24d0);
    bRam0000000005c38040 = 1;
  }
  puVar4 = PTR_DAT_05818970;
  puVar3 = PTR_DAT_057d24d0;
  puVar2 = PTR_DAT_0575aea0;
  iVar1 = *(int *)(param_1 + 0x28);
joined_r0x03f0a498:
  iVar1 = iVar1 + -1;
  if (iVar1 < 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_03f0a59c;
  auVar10 = System_Collections_Generic_List_ValueTuple_object__object____get_Item_2c04714
                      (*(long *)(param_1 + 0x18),iVar1,*(undefined8 *)puVar4);
  lVar7 = auVar10._8_8_;
  lVar8 = auVar10._0_8_;
  if (lVar8 == 0) goto LAB_03f0a59c;
  uVar5 = System_Threading_Tasks_Task__get_IsCompletedSuccessfully_2a15494(lVar8,0);
  if ((uVar5 & 1) == 0) goto LAB_03f0a524;
  lVar9 = *(long *)(param_1 + 0x20);
  System_Threading_Tasks_Task_ValueTuple_object__object____get_Result_1fa8290
            (lVar8,*(undefined8 *)puVar3);
  uVar6 = System_Threading_Tasks_Task_ValueTuple_object__object____get_Result_1fa8290
                    (lVar8,*(undefined8 *)puVar3);
  if (lVar9 == 0) goto LAB_03f0a59c;
  Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__OnProfileSpriteLoadSuccess_3e094a4
            (lVar9,lVar7,extraout_x1,uVar6);
  goto LAB_03f0a558;
LAB_03f0a524:
  uVar5 = System_Threading_Tasks_Task__get_IsFaulted_2a15110(lVar8,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    if ((lVar8 != 0) && (lVar7 != 0)) {
      *(undefined1 *)(lVar7 + 0x2a) = 1;
      *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + 1;
      *(undefined1 *)(lVar8 + 0x51) = 1;
      *(undefined1 *)(lVar7 + 0x28) = 0;
LAB_03f0a558:
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Collections_Generic_List_ValueTuple_object__object____RemoveAt_2c06414
                  (*(long *)(param_1 + 0x18),iVar1,*(undefined8 *)puVar2);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        goto joined_r0x03f0a498;
      }
    }
LAB_03f0a59c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  goto joined_r0x03f0a498;
}

