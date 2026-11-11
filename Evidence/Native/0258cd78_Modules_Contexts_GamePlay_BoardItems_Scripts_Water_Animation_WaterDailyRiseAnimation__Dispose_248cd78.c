/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterDailyRiseAnimation$$Dispose
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation__Dispose (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterDailyRiseAnimation$$Dispose
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation__Dispose
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation__Dispose_248cd78
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar1,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    uVar3 = 0;
    uVar4 = 0;
    uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (lVar1 != 0) {
      uStack_2c = uVar3;
      uStack_28 = uVar4;
      uStack_24 = in_s3;
      if (pcRam0000000005c3a640 == (code *)0x0) {
        pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
      }
      (*pcRam0000000005c3a640)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

