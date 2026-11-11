/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetColorAsEllipseColor
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColorAsEllipseColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetColorAsEllipseColor
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColorAsEllipseColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColorAsEllipseColor_248b254
               (long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000005c2b277 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b277 = 1;
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__KillColorChangeTweens_248b1c8
            (param_1);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__SetColorSprite_1e9ec14
              (*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x78),0);
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_SpriteRenderer__set_color_4095de0
                (*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                 *(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),
                 *(long *)(param_1 + 0x48),0);
      puVar1 = PTR_DAT_0576c200;
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_SpriteRenderer__set_color_4095de0
                  (*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                   *(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),
                   *(long *)(param_1 + 0x38),0);
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_0258b36c;
          UnityEngine_SpriteRenderer__set_color_4095de0
                    (*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                     *(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),
                     *(long *)(param_1 + 0x40),0);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_SpriteRenderer__set_color_4095de0
                    (*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                     *(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),
                     *(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x28) != 0) {
            UnityEngine_SpriteRenderer__set_color_4095de0
                      (*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                       *(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c),
                       *(long *)(param_1 + 0x28),0);
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != 0) {
              uStack_28 = *(undefined4 *)(param_2 + 0x68);
              uStack_24 = *(undefined4 *)(param_2 + 0x6c);
              uStack_30 = *(undefined4 *)(param_2 + 0x60);
              uStack_2c = *(undefined4 *)(param_2 + 100);
              if (pcRam0000000005c3a788 == (code *)0x0) {
                pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
              }
              (*pcRam0000000005c3a788)(lVar3,&uStack_30);
              return;
            }
          }
        }
      }
    }
  }
LAB_0258b36c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

